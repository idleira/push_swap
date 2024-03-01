# push_swap - @42Wolfsburg

*"because swap_push isn’t as natural."*

## description
push_swap is a very simple and a highly straightforward algorithm project where we sort data.

we have at our disposal a set of integer values, 2 stacks, and a set of instructions to manipulate both stacks.

our gois to write a program in c called push_swap which calculates and displays on the standard output the smallest program that sorts the integers received as arguments.

this program is made up of solely push swap language **instructions**.

## 

here are some **resources** i used:

• [sorting algorithms](https://www.geeksforgeeks.org/sorting-algorithms/)

• [push swap — a journey to find most efficient sorting algorithm](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)

• [push_swap: the least amount of moves with two stacks](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)

## 

## push_swap instructions
| key | instruction | action |
|------------------|------------------|------------------|
| `sa` | swap a | swap the top two elements of stack **a**. if 1 or no elements - no action |
| `sb` | swap b | swap the top two elements of stack **b**. if 1 or no elements - no action |
| `ss` | swap a & swap b | `sa` and `sb` at the same time. |
| `pa` | push a | move the top element of stack **b** to the top of **a**. if **b** is empty - no action |
| `pb` | push b | move the top element of stack **a** to the top of **b**. if **a** is empty - no action |
| `ra` | rotate a | shift all elements of **a** up by 1, first element becomes the last |
| `rb` | rotate b | shift all elements of **b** up by 1, first element becomes the last |
| `rr` | rotate a & rotate b | `ra` and `rb` at the same time. |
| `rra` | reverse rotate a | shift all elements of **a** down by 1, last element becomes the first |
| `rrb` | reverse rotate b | shift all elements of **b** down by 1, last element becomes the first |
| `rrr` | reverse rotate a + reverse rotate b | `rra` and `rrb` at the same time|

## performance
i used a positional sorting algorithm, it sorts by index and position.

this algorithm is very efficient: its results are well below the limits that the push_swap evaluation imposes.

here you can see how it performs, thanks to [this](https://github.com/Niimphu/push_swap_visualiser) visualiser by [Niimphu](https://github.com/Niimphu).
![push_swap 50 values](https://github.com/idleira/push_swap/assets/127216218/71ed9480-97a4-406b-904a-d29d1a770030)

• to get full 5 points when working with 100 values, the list of instructions must be less than 700 (mine ranges from 550 to 640):
![push_swap 100 values](https://github.com/idleira/push_swap/assets/127216218/cef83f1c-960b-40f2-b4b6-b2961f52b213)

• to get full 5 points when working with 500 values, the list of instructions must be less than 5500 (mine ranges from 4500 to 5000):
![push_swap 500 values](https://github.com/idleira/push_swap/assets/127216218/8203b0e1-d4ae-46ca-bceb-bd9a972e6855)

## usage
1. clone this repository: `clone git@github.com:idleira/push_swap.git push_swap && cd push_swap`

2. compile the project with `make`

3. give the algorithm a random amount of negative and/or positive numbers, which cannot be duplicated:

   `./push_swap 2 9 6 10 67`

   → the output will look like this: `pb pb ra pa rra pa`, to visualize these operations use the [visualizer](https://github.com/Niimphu/push_swap_visualiser) (duh).

## my final grade
![push_swap grade 100/100](https://github.com/idleira/push_swap/assets/127216218/2b325d1b-2c5b-48f7-a77b-d5555a1b6181)
