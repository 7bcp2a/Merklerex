#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"
#include "CSVReader.h"


 int main()
 {
     //MerkelMain app{};
     //app.init();
     CSVReader reader;
 }

   


//     std::vector<OrderBookEntry> orders;


//     OrderBookEntry order1{  1000,
//                             0.02, 
//                             "2020/03/17 17:01:24.884492", 
//                             "BTC/USDT",
//                             OrderBookType::bid};

//     orders.push_back(   OrderBookEntry{  1000,
//                             0.02, 
//                             "2020/03/17 17:01:24.884492", 
//                             "BTC/USDT",
//                             OrderBookType::bid});
//     orders.push_back(   OrderBookEntry{  2000,
//                             0.02, 
//                             "2020/03/17 17:01:24.884492", 
//                             "BTC/USDT",
//                             OrderBookType::bid});


    
//     //iterator style syntax
//     for (OrderBookEntry& order : orders)
//     {
//         std::cout << "The price is " << order.price << std::endl;
//     }
//     //array style syntax
//     for (unsigned int i = 0; i < orders.size(); ++i)
//     {
//         std::cout << "The price is " << orders[i].price << std::endl;
//     }
//     //object style syntax
//      for (unsigned int i = 0; i < orders.size(); ++i)
//     {
//         std::cout << "The price is " << orders.at(i).price << std::endl;
//     }

