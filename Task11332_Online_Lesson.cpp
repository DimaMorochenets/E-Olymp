#include <iostream>

int main()
{
    int allStudents = 0;
    int presentStudents = 0;

    std::cin >> allStudents >> presentStudents;

    std::cout << allStudents - presentStudents << std::endl;

    return 0;
}

/*a students joined the videoconference lesson. But some of the students could not join due to the lack of Internet. 
Determine how many students were unable to join the video conference if it is known that there are s students in the class.

Two lines, each containing one integer:
    the first line contains the number s (1 ≤ s ≤ 10^6) - the number of students in the class;
    the second line contains the number a (0 ≤ a ≤ 10^6) - the number of students who could join the lesson.*/