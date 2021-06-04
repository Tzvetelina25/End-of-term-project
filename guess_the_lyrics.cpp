#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main ()
{

    char guess, a='a', b='b', c='c', d='d';
    int points = 0;
    cout << "Guess The Lyrics - Olivia Rodrigo Songs Edition"<<endl;
    Sleep(1000);
    cout<< "Are you ready?"<<endl;
    Sleep(2000);
    cout<<"3..."<<endl;
    Sleep(1000);
    cout<<"2..."<<endl;
    Sleep(1000);
    cout<<"1..."<<endl;
    Sleep(1000);
    cout<< "First lyrics: And I know that you'll never feel sorry for the way I hurt..."<<endl;
    cout<< "a. Hope ur ok"<<"     "<<"b. Jealousy, jealousy"<<"     "<<"c. Traitor"<<"     "<<"d. Enough for you"<<endl;
    cin>>guess;
    if(guess == c){
        cout<< "Correct! You've got it! Here come the next lyrics:"<<endl;
        points++;
    }
    else{
        cout<< "Ooops... You're wrong. The answer is 'Traitor'. But don't worry, here's the next one:"<<endl;
    }
    Sleep(2000);
    cout << "I'm selfish, I know, I can't let you go"<<endl;
    cout<< "a. Happier"<<"     "<<"b. 1 step forward, 3 steps back"<<"     "<<"c. Good 4 u"<<"     "<<"d. Jealousy, jealousy"<<endl;
    cin>>guess;
    if(guess == a){
        cout << "Correct! Good job! Here are the next lyrics:"<<endl;
        points++;
    }
    else{
        cout << "Ooops... You didn't guess it. The correct answer is 'Happier'. However, here are the next lyrics:"<<endl;
    }
    Sleep(2000);
    cout << "I'm so sick of 17"<<endl;
    cout<< "a. Favorite crime"<<"     "<<"b. Brutal"<<"     "<<"c. All I want"<<"     "<<"d. Happier"<<endl;
    cin>>guess;
    if(guess == b){
        cout << "Correct! Well done! The forth lyrics are:"<<endl;
        points++;
    }
    else{
        cout << "Ooops... Wrong. The answer is 'Brutal'. But don't worry, here's the next one:"<<endl;
    }
    Sleep(2000);
    cout << "I hate to think that I was just your type"<<endl;
    cout<< "a. Deja vu"<<"     "<<"b. Traitor"<<"     "<<"c. Enough for you"<<"     "<<"d. Brutal"<<endl;
    cin>>guess;
    if(guess == a){
        cout << "Correct! The next lyrics is:"<<endl;
        points++;
    }
    else{
        cout << "Ooops... You didn't guess right, the answer is 'Deja vu'. However, here's the next one:"<<endl;
    }
    Sleep(2000);
    cout << "God, I'm so blue, know we're trough"<<endl;
    cout<< "a. Traitor"<<"     "<<"b. All I want"<<"     "<<"c. 1 step forward, 3 steps back"<<"     "<<"d. Drivers license"<<endl;
    cin>>guess;
    if(guess == d){
        cout << "Correct! Here are the next lyrics:"<<endl;
        points++;
    }
    else{
        cout << "Ooops... You're wrong, the answer is 'Drivers license'. Here are the next sixth lyrics from our quiz:"<<endl;
    }
    Sleep(2000);
    cout << "And you always say I'm never satisfied"<<endl;
    cout<< "a. Jealousy, jealousy"<<"     "<<"b. Enough for you"<<"     "<<"c. Happier"<<"     "<<"d. All I want"<<endl;
    cin>>guess;
    if(guess == b){
        cout << "Correct! Well done! Here are the next lyrics:"<<endl;
        points++;
    }
    else{
        cout << "Ooops... You didn't guess it, the answer is 'Enough for you'. However, here are the seventh lyrics:"<<endl;
    }
    Sleep(2000);
    cout << "One heart broke, four hands bloody"<<endl;
    cout<< "a. Brutal"<<"     "<<"b. Good 4 u"<<"     "<<"c. Favorite crime"<<"     "<<"d. 1 step forward, 3 steps back"<<endl;
    cin>>guess;
    if(guess == c){
        cout << "Correct! Here are the next lyrics:"<<endl;
        points++;
    }
    else{
        cout << "Ooops... You didn't guess it, the answer is 'Favorite crime'. However, here are the next lyrics:"<<endl;
    }
    Sleep(2000);
    cout << "You will never have to hurt the way you know that I do"<<endl;
    cout<< "a. Happier"<<"     "<<"b. Deja vu"<<"     "<<"c. Hope ur ok"<<"     "<<"d. Good 4 u"<<endl;
    cin>>guess;
    if(guess == d){
        cout << "Correct! Good job!Here are the ninth lyrics:"<<endl;
        points++;
    }
    else{
        cout << "Ooops... You're wrong, the answer is 'Good 4 u'. However, here are the ninth lyrics:"<<endl;
    }
    Sleep(2000);
    cout << "Don't know if I'll see you again someday"<<endl;
    cout<< "a. Enough for you"<<"     "<<"b. Happier"<<"     "<<"c. Hope ur ok"<<"     "<<"d. Drivers license"<<endl;
    cin>>guess;
    if(guess == c){
        cout << "Correct! Well done! Here are the last lyrics:"<<endl;
        points++;
    }
    else{
        cout << "Ooops... You didn't guess it, the answer is 'Hope ur ok'. However, here are the last lyrics:"<<endl;
    }
    Sleep(2000);
    cout << "Now happy ever after it don't come so easily"<<endl;
    cout<< "a. Good 4 u"<<"     "<<"b. All I want"<<"     "<<"c. Jealousy, jealousy"<<"     "<<"d. Happier"<<endl;
    cin>>guess;
    if(guess == b){
        cout << "Correct! Well done! Here are the results:"<<endl;
        points++;
    }
    else{
        cout << "Ooops... You're wrong, the answer is 'All I want'. However, here are the results:"<<endl;
    }
    if (points > 7){
       cout << "You scored " << points << " out of 10! Good job!!! You’re a big fan of Olivia - just like us. You killed it! Thanks for playing Guess The Lyrics Game! Share it with your friends if you enjoyed playing... and if you didn’t, please share it as well :)"<<endl;
    } else if (points > 4 && points < 8){
       cout << "You scored " << points << " out of 10! Well done! You did pretty fine. You’re not as big fan of Olivia as us but we still appreciate your attempt. Share with friends and good luck in the competition with them :)"<<endl;
    }else if (points < 5 && points > 0){
       cout << "You scored " << points << " out of 10! You did... um... anyways... share with friends, hopefully they will score better. And listen to 'Sour', maybe next time you will not only recognise 'Drivers license'"<<endl;
    }else if (points == 0){
       cout << "You scored... 0 points. Oh, buddy... you’re such a disappointment. Have you even heard of Olivia? Go listen to 'Sour' ASAP! If you know what 'Sour' is... anyways, share with friends - maybe they’ve heard of her."<<endl;
    }
    return 0;
}
