#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SalesOrder {
  int _bidPrice;
  int _lots;
  int _accountNumber;
  bool _executed;
public:
  SalesOrder(int bidPrice, int lots, int accountNumber);
  bool executable(int offerPrice);
  void execute(void);
};

int main()
{
  int offerPrice = 25;
  vector<SalesOrder> salesOrders;
  string MENU =
    "COMMANDS:\n\n"
    "offer <price>\n"
    "bid <account-number> <lots> <price>\n"
    "menu: prints this menu\n"
    "quit: ends program\n\n";

  cout << "Welcome to cis4100Trade" << endl << endl;
  cout << MENU;

  while (true)
  {
    string command;
    cout << ">> ";
    cin >> command;
    if (command == "menu")
    {
      cout << MENU;
    }
    else if (command == "quit")
    {
      cout << "Program terminated" << endl;
      break;
    }
    else if (command == "offer")
    {
      int oldOfferPrice = offerPrice;
      cin >> offerPrice;
      if (offerPrice < oldOfferPrice)
      {
        for (int i = 0; i < salesOrders.size(); i += 1)
        {
          if (salesOrders[i].executable(offerPrice))
          {
            salesOrders[i].execute();
          }
        }
      }
    }
    else if (command == "bid")
    {
      int bidPrice, lots, accountNumber;
      cin >> accountNumber >> lots >> bidPrice;
      SalesOrder salesOrder(bidPrice, lots, accountNumber);
      salesOrders.push_back(salesOrder);
      if (salesOrders.back().executable(offerPrice))
      {
        salesOrders.back().execute();
      }
    }
    else
    {
        cout << "Unrecogonized command" << endl;
    }

  }

  return 0;
}

SalesOrder::SalesOrder(int bidPrice, int lots, int accountNumber)
{
  _bidPrice      = bidPrice;
  _lots          = lots;
  _accountNumber = accountNumber;
  _executed      = false;

  cout
    << "Creating Sales Order -- "
    << "Account: "    << accountNumber
    << " Bid Price: " << bidPrice
    << " Lots: "      << _lots
    << endl;
}

bool SalesOrder::executable(int offerPrice)
{
  return !_executed && _bidPrice >= offerPrice;
}

void SalesOrder::execute(void)
{
    _executed = true;
    cout
      << "Executing Sales Order -- "
      << "Account: "    << _accountNumber
      << " Bid Price: " << _bidPrice
      << " Shares: "    << _lots
      << endl;
}
