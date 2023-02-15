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
![image](https://user-images.githubusercontent.com/123716596/218925136-298e559b-8a04-432a-95a0-f087a6649ef5.png)

![image](https://user-images.githubusercontent.com/123716596/218925798-de2850b9-bdc1-4818-8594-21ac27207399.png)
![image](https://user-images.githubusercontent.com/123716596/218926545-1ccfde2c-da09-42f9-bec7-b8e61abca2c1.png)

# TASK 4
Write a shell script that will create a text file fileNames.txt and place all text files names
in this file found in a folder and its subfolders. Yes you are right for this task the folder is
the containing the 5 folders you created in task2.

make task4.sh
put command 

find /home/virtual/lab02/task3 >> fileNames.txt

# In filesNames.txt
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

![image](https://user-images.githubusercontent.com/123716596/218931168-188dcaee-ae54-4834-8e51-ba0b92e42d7c.png)

![image](https://user-images.githubusercontent.com/123716596/218931330-b5b735fa-5152-4bd4-bdfe-41f12a83c18f.png)

# TASK 5

What do we need these nested text files for? Create a shell script that deletes these text
files buried in the subfolders.
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
for i in {1..5}; do
for j in {1..2}; do
rm "test0$i/0$j"/test.txt
done
done

![image](https://user-images.githubusercontent.com/123716596/218932043-a76f8370-4634-4ba2-bd1b-e95ca8632a50.png)

![image](https://user-images.githubusercontent.com/123716596/218932683-4f292c38-dc4b-4257-b95e-05e1b07c186c.png)

# TASK 6

Write a shell script that takes integer input from command line and prints that many
Fibonacci sequence numbers.

![image](https://user-images.githubusercontent.com/123716596/218933471-2eab602f-da10-4ecb-9745-8e8bad7694bc.png)

![image](https://user-images.githubusercontent.com/123716596/218933821-571b6231-aaa6-4bbf-9d09-588806e73d5c.png)







