#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

class CharacterInstance
{

private:
    int characterAC;
    int charcterInitiative;
    int characterHP;
    string charactername = "";
    
    // ------------------------ GETTER SETTER NAME------------------------//
    void setname()
    {
        cin >> charactername;
    }
    
    string getname()
    {
       return charactername;
    }
    //--------------------------------------------------------------------//
    
    // --------------------- GETTER SETTER Initateive --------------------//
    void setCharacterInitateive()
    {
        cin >> charcterInitiative;
        while (charcterInitiative <= 0)
        {
            cout<<"The Initiative must be 0 or more\n";
            cin >> charcterInitiative;
        }
    }
    
    int getCharacterInitateive()
    {
        return charcterInitiative;   
    }
    //--------------------------------------------------------------------//
    
    // -------------------- GETTER SETTER Armor Class -------------------//
    void setCharacterAC()
    {
        cin >> characterAC;
        while (characterAC <= 0)
        {
            cout<<"The AC must be 0 or more\n";
            cin >> characterAC;
        }
    }

    int getCharacterAC()
    {
        return characterAC;
    }
    //--------------------------------------------------------------------//

    // -------------------- GETTER SETTER Health Point -------------------//
    void setCharacterHP()
        {
            cin >> characterHP;
            while (characterHP <= 0)
            {
                cout<<"The AC must be 0 or more\n";
                cin >> characterHP;
            }
        }

    int getCharacterHP()
    {
        return characterHP;
    }
    //--------------------------------------------------------------------//
public:
    void InstantateCharacterStats() 
    {
        cout << "what is the characters name\n";
        setname();
        cout << "What is the "<<getname() <<" initative\n";
        setCharacterInitateive();
        cout << "What is " << getname() << " Armor Class\n";
        setCharacterAC();
        cout << "What is " << getname() << " Health Points\n";
        setCharacterHP();
    } 
    void DispalyCharacter()
    {
        cout<<"Name: "<<getname()<<"\n";
        cout<<"---------------"<<"\n";
        cout<<"HP: "<< getCharacterHP()<<"\n";
        cout<<"AC: "<< getCharacterAC()<<"\n";
        cout<<"Initiative: "<< getCharacterInitateive()<<"\n";
    }
    

};


int main()
{
    list<CharacterInstance> CharacterList = {};
    int characternumbers = 0;
    cout << "How many characters do you need?\n";
    cin  >> characternumbers;
    for (int i=0;i < characternumbers; i++) {
        CharacterInstance objecti;
        objecti.InstantateCharacterStats();
        CharacterList.push_back(objecti);
    }
    
    for (list<CharacterInstance>::iterator it = CharacterList.begin(); it != CharacterList.end(); it++) {
        (it) -> DispalyCharacter();
    }
}