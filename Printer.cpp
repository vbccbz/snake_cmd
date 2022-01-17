#include <iostream>
#include <iomanip>

#include <string.h>

#include <windows.h>

#include "Printer.h"
#include "Dot.h"
#include "DotMoving.h"

Printer::Printer(void) { memset(arr, '-', 100); }

Printer::~Printer(void) { ; }

void Printer::write(Dot& dot) {
  memset(arr, '-', 100);
  // arr[dot.get_row() * 10 + dot.get_column()] = 'X';
  arr[dot.row * 10 + dot.column] = 'X';
  return;
}

void Printer::write(DotMoving & dotm) {
  memset(arr, '-', 100);
  arr[dotm.row * 10 + dotm.column] = 'X';
  return;
}

void Printer::print(void) {
  for (size_t row = 0; row < 10; ++row) {
    for (size_t column = 0; column < 10; ++column) {
      std::cout << arr[row * 10 + column];
      // Sleep(10);
    };
    std::cout << '\n';
    // Sleep(10);
  }
  Sleep(100);
  system("cls");
  return;
}

