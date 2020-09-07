#include <iostream>
#include <string>

int main()
{
	std::string str1, str2;
	std::cin >> str1 >> str2;

	(str1.size() >= str2.size()) ? std::cout << "go" : std::cout << "no";

	return 0;
}

/*Jon Marius shouted too much at the recent Justin Bieber concert, 
  and now needs to go to the doctor because of his sore throat. 
  The doctor’s instructions are to say "aaah". Unfortunately, 
  the doctors sometimes need Jon Marius to say "aaah" for a while, 
  which Jon Marius has never been good at. 
  Each doctor requires a certain level of "aah" – some require "aaaaaah", 
  while others can actually diagnose his throat with just a "h". 
  (They often diagnose wrongly, but that is beyond the scope of this problem.) 
  Since Jon Marius does not want to go to a doctor and have his time wasted, 
  he wants to compare how long he manages to hold the "aaah" with the doctor’s requirements. 
  (After all, who wants to be all like "aaah" when the doctor wants you to go "aaaaaah"?)

  Each day Jon Marius calls up a different doctor and asks them how long his "aaah" has to be. 
  Find out if Jon Marius would waste his time going to the given doctor.*/