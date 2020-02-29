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

The menu choices before you are:
1: Purchase item
2: Restock (once per game)
3: Quit
You have $50, 0 HP, and 0 EP.
Your choice? __

If you select "Purchase item", the vending machine might display:

-------------------------------------------
1: (a) Nutter Butter ($1.00, 0.5 HP,  2 EP)
1: (b) Granola Bar   ($1.50, 2 HP,    1 EP)
1: (c) Chips         ($1.50, 1 HP,    2 EP)
-------------------------------------------
2: (a) Water         ($1.00, 2 HP,    1 EP)
2: (b) Orange Juice  ($3.00, 3 HP,    2 EP)
2: (c) Diet Coke     ($1.00, -0.5 HP, 1 EP)
-------------------------------------------

And the program will prompt you:

> Please choose an item using its shelf and location coordinates
  (e.g., 1a for Nutter Butter or 2c for Diet Coke):

The vending machine options and prices may change after each selection
you make.  Some items may be out of stock.

You can also select the "Restock" option, once per game.  This
generates a new set of items to choose from in the vending machine.
It is helpful if you dislike all of the options currently available.

If you select an option that does not exist, you will be returned to
the menu to try again (until you select "Quit").

When you run out of money or if your health points go negative, the
game is automatically over.

4) Limitations:
- There is no way to undo a purchase.
- The vending machine only provides up to 6 choices at a time.

5) Extra credit:
- This program also allows you to hunt for loose change under the
  machine.  This consumes 0.5 HP and 1 EP but yields a randomly
  selected amount of money (from $0.00 to $2.00).  The updated menu
  is:

The menu choices before you are:
1: Purchase item
2: Restock (once per game)
3: Hunt for loose change
4: Quit
You have $50, 0 HP, and 0 EP.
Your choice? __
