Name: Kiri Wagstaff
ONID: XXXXXXXXX
Section: CS 161-020
Assignment -1, due 7/4/2025

Description:

Welcome to Vending Machine Mania!  You can buy your favorite sugary
drink or snack at any time.  The offerings that are available change
over time, and prices fluctuate with the market.  Your goal is to
maximize the sum of your money, health, and happiness points.  Happy
eating!

Instructions:

1) Compile the program with

g++ -o vending_machine vending_machine.cpp

2) Run the program with

./vending_machine

3) You start with $50 to spend, 0 health points, and 0 happiness
points.  You are starving!  The vending machine will present you with
several items that are currently available through a menu, along with
their prices and the health and happiness points they will give you
(health and happiness points can be negative for some items!).  You
can select items to buy, which will deduct money from your account and
modify your health and happiness points by the corresponding amounts.

The vending machine options and prices may change after each selection
you make.  Some items may be out of stock.

If you select an option that does not exist, you will be returned to
the menu to try again (until you select "Quit").

When you run out of money, the game is over.  You must spend all of
your money.

4) Limitations:
- There is no way to earn more money once it is spent.
- The vending machine only provides up to 5 choices at a time.

5) Extra credit:
- This program also allows you, once per game, to select the "Restock"
  option on the menu.  This generates a new set of items to choose from.
