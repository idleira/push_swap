# push_swap - @42Wolfsburg
*"According to all known laws of aviation, there is no way a bee should be able to fly.*
## description
push_swap is a very simple and a highly straightforward algorithm project where we sort data.

we have at our disposal a set of integer values, 2 stacks, and a set of instructions to manipulate both stacks.

our gois to write a program in c called push_swap which calculates and displays on the standard output the smallest program that sorts the integers received as arguments.

this program is made up of solely push swap language instructions.

some resources that helped me:


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
i used efficient positional sorting algorithm that sorts by index and position.

[push_swap 50 values](https://github.com/idleira/push_swap/assets/127216218/e43e1244-dbba-4d55-8b3d-540854fa4553)
[push_swap 100 values](https://github.com/idleira/push_swap/assets/127216218/b3058400-5995-4fd1-961e-65291015a83c)
[push_swap 500 values](https://github.com/idleira/push_swap/assets/127216218/0e2ef26e-1dca-4539-a5ae-55c6b55471f2)



## usage
1. clone this repository: `git@github.com:idleira/push_swap.git push_swap && cd push_swap`

## my final grade
![push_swap grade 100/100](https://github.com/idleira/push_swap/assets/127216218/2b325d1b-2c5b-48f7-a77b-d5555a1b6181)
