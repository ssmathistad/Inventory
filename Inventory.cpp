#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

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
  if (item.m_instock <= 0) {
    cout << "No more in stock" << endl;
  } else {
    item.m_in_stock--;
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
