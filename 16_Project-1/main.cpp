// Vector : stores a list of products
// List : order
// deque : Number of visits
// Set : Category
// Map : Stock count 
// Multi-Map : allowing user to order multiple items

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <ctime>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct Product
{
    int productId;
    string name;
    string category;
};

struct Order
{
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t orderDate;
};

int main() {
    // Prodcuts Info :
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "smartPhone", "Electronics"},
        {103, "Stove", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"},
    };

    // For tracking customers visit :
    deque<string> recentCustomers = {"C001", "C002", "C003"};

    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    // To place orders from customers : 
    list<Order> orderHistory;

    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});

    // To filter all the categories : 
    set<string> categories;
    for(const auto &product: products){
        categories.insert(product.category);
    }

    // Maps(Ordered) : Stock count
    map<int, int> productStock = {
        {101, 10},
        {102, 15},
        {103, 5},
        {104, 12},
        {105, 11},
    };

    // Multi-Map : allowing user to order multiple items
    multimap<string, Order> customerOrders;
    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerId, order});
    }    

    // Unordered maps : This is a demo to use unordered maps and has no role in this project
    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "Bob"},
        {"C003", "Amith"},
        {"C004", "Vikram"},
        {"C005", "Aaryan"},
    };

    // Unordered sets : This is a demo to use unordered sets and has no role in this project
    unordered_set<int> uniqueProductId;
    for(const auto &product: products){
        uniqueProductId.insert(product.productId);
    }

    return 0;
}