#include<stdio.h>
#include<string.h>

int main(void)
{
    const char nearestVowels[26] = "aaaeeeeiiiiioooooouuuuuuuu";
    int isVowel(char letter);

    char word[30];
    char translate[90];
    char output;
    char stringAdd[3];
    int runCount = 0;
    fgets(word, 30, stdin);
    int len = strlen(word) - 1;
    for(int i = 0; i < len; i++)
    {

        if(isVowel(word[i]) == 0)
        {
            //checking for vowel
            if(runCount < 1){
                strcpy(translate, word[i]);
                runCount++;
            }
            else{
                strcat(translate[i], word[i]);
                //translate[i + 2] = word[i];
                runCount++;
            }
        }
        else
        {
            //adding original letter
            if(runCount > 1)
            {
                //translate[i + (i * 2)] = word[i];
                strcat(stringAdd[0], word[i]);
            }


            //adding vowel and consonant (also checks for runtime count since strcat doesn't work)
            if(runCount >= 1)
            {
                output = nearestVowels[word[i] - 'a'];
                strcat(stringAdd[1], output);
                //translate[i + (i * 3)] = output;
                //adding consonant
                if((int)word[i] != 122)
                {
                    strcat(stringAdd[2], word[i] + 1);
                    //translate[i + (i * 4)] = word[i] + 1;
                }
                else
                {
                    strcat(stringAdd[2], word[i]);
                }
                //check
                if(isVowel(stringAdd[2]) == 0)
                {
                    stringAdd[2]++;
                }
                runCount++;
            }
        }
        if(runCount > 1)
        {
            strcat(translate, stringAdd);
        }
        else
        {
            strcpy(translate, stringAdd);
        }
    }
    printf("%s", translate);
}

int isVowel(char letter)
{
    char word = letter;
    if((int)word == 97 || (int)word == 101 || (int)word == 105 || (int)word == 111 || (int)word == 117)
        {
            return 0;
        }
    else
    {
        return 1;
    }
}