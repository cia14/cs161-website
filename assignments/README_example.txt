Name: Kiri Wagstaff
ONID: XXXXXXXXX
Section: CS 161-020
Assignment -1, due 7/4/2025

Description:

Welcome to Vending Machine Mania!  You can buy your favorite sugary
drink or snack at any time.  The offerings that are available change
over time, and prices fluctuate with the market.  Your goal is to
maximize the sum of your money, health, and enjoyment points.  Happy
eating!

Instructions:

1) Compile the program with

g++ -o vending_machine vending_machine.cpp

2) Run the program with

./vending_machine

3) You start with $50 to spend, 0 health points, and 0 enjoyment
points.  You are starving!  The vending machine will present you with
several items that are currently available through a menu, along with
their prices and the health and enjoyment points they will give you
(health and enjoyment points can be negative for some items!).  You
can select items to buy, which will deduct money from your account and
modify your health and enjoyment points by the corresponding amounts.

For example, the vending machine might display:

------------------------------------------
1: (a) Nutter Butter ($1.00, 0.5 HP, 2 EP)
1: (b) Granola Bar   ($1.50, 2 HP,   1 EP)
1: (c) Chips         ($1.50, 1 HP,   2 EP)
------------------------------------------
2: (a) Water         ($1.00, 2 HP,   1 EP)
2: (b) Orange Juice  ($3.00, 3 HP,   2 EP)
2: (c) Diet Coke     ($1.00, 0.5 HP, 1 EP)
------------------------------------------
You have $50, 0 HP, and 0 EP.

And the program will prompt you:

> Please choose an item using its shelf and location coordinates
  (e.g., 1a for Nutter Butter or 2c for Diet Coke):

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
