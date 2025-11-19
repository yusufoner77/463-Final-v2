//******************************************************************************
// Yusuf Oner
// z2048138
// CSCI 463
//
// I certify that this is my own work, and where applicable an extension
// of the starter code for the assignment.
//
//******************************************************************************

#include "hex.h"
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

//******************************************************************************
// This function must return a std::string with exactly 2 hex digits representing 
// the 8 bits of the i argument.
//******************************************************************************
string hex::to_hex8(uint8_t i)
{
  ostringstream os;
  os << std::hex << setfill('0') << setw(2) << static_cast<uint16_t>(i);
  return os.str();
}

//******************************************************************************
// This function must return a std::string with 8 hex digits representing the 32 
// bits of the i argument
//******************************************************************************
string hex::to_hex32(uint32_t i)
{
  ostringstream os;
  os << std::hex << setfill('0') << setw(8) << i;
  return os.str();
}

//******************************************************************************
// This function must return a std::string beginning with 0x, followed by the 
// 8 hex digits representing the 32 bits of the i argument
//******************************************************************************
string hex::to_hex0x32(uint32_t i)
{
  return string("0x")+to_hex32(i);
}