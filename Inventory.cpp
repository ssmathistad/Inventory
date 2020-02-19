#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;
/*
The Inventory function takes a new item into the inventory
*/
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/*
Sells a single item in the inventory
*/
void Inventory::sell()
{
  if (m_in_stock <= 0) {
    cout << "No more in stock" << endl;
  } else {
    m_in_stock--;
  }
}

/*
Outputs information about an inventory item (name followed by price)
*/
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
