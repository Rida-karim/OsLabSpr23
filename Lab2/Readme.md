# Lab2

# TASK 1
1. This task is just to get you familiarized with shell and shell scripting. Using a graphics
editor or VIM create a shell script file (with .sh extension) and find the minimum of 3
numbers provided as command line arguments from the terminal. E.g.
> ./minthree.sh 34 32 39
> The min of 34 32 and 39 is 32

echo "Hello World"
echo "First var is: " $1
echo "Second var is :" $2
echo "Third var is: " $3
if [[ $1 < $2 && $1 < $3 ]]; then echo "$1 is the smallest number. ";
fi
if [[ $2 < $1 && $2 < $3 ]]; then echo "$2 is the smallest number. ";
fi
if [[ $3 < $2 && $3 < $1 ]]; then echo "$3 is the smallest number. ";
fi

![Task 1](https://user-images.githubusercontent.com/123716596/217619650-57d0a651-c25d-4a1b-88eb-77c5e6ac26cb.png)


# TASK 2
Too easy? How about we make things a little challenging for you. Using shell script
create 5 directories named test01, test02 ... test05. Then:-
a. In each directory create 2 folders named 01 and 02
b. and each of these sub folders contains a text file with name test.txt .
c. Add datetime of the system to this these text files.

for i in {1..5}; do
name="test0$i"
mkdir $name
cd $name
mkdir 01
cd 01
touch test.txt
date > test.txt
cd ..
mkdir 02
cd 02
touch test.txt
date > test.txt
cd ..
cd ..
done

![Task 2 continue](https://user-images.githubusercontent.com/123716596/217622146-a329012b-9a5a-4247-95b8-f1dc0845acd6.PNG)

![Task2](https://user-images.githubusercontent.com/123716596/217621143-0a4f010b-e50e-49ac-ae43-0c80630ac58e.PNG)
![Task2 c](https://user-images.githubusercontent.com/123716596/217623682-fb7f288b-8601-4a1c-87af-ae52e9255662.PNG)


# TASK 3

Now here is the fun part. From another shell script read all text files in the folders and
subfolders you created in task 2 and merge their content in one text file.

for i in {1..5}; do
name="test0$i"
mkdir $name
cd $name
mkdir 01
cd 01
touch test.txt
date > test.txt
cd ..
mkdir 02
cd 02
touch test.txt
date > test.txt
cat "test0$i/01/test.txt" "test0$i/02/test.txt" >> txtfile.txt
cd ..
cd ..
done

![Task 3](https://user-images.githubusercontent.com/123716596/217622950-1bf33251-18d4-42c1-9600-0bfb7628ded6.PNG)






