// Copyright 2021 ak-kuznetsov <a.kuznetsov2701@mail.ru>

#include <Hash_calculator.hpp>

int main(int argc, char* argv[]) {
  signal(SIGINT, Hash_calculator::Signal_catch);
  Hash_calculator hash(argc, argv);
  hash.Start(true);
}
