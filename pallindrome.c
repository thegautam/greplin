#include <stdio.h>
#include <string.h>

int find_first_index(int i, int j, const char *input)
{
  while (i >= 0 && j < strlen(input) && input[i] == input[j])
    {
      i--;
      j++;
    }

  return i+1;
}

void output(int i, int count, const char *input)
{
  int j;
  
  for (j = 0; j < count; j++)
    {
      printf("%c", input[i+j]);
    }

  printf("\n");
}



int main()
{
  const char* input = "FourscoreandsevenyearsagoourfaathersbroughtforthonthiscontainentanewnationconceivedinzLibertyanddedicatedtothepropositionthatallmenarecreatedequalNowweareengagedinagreahtcivilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";

  int maxcount = -1;
  int count = 0;
  int firstindex = 0;
  int index = 0;
  int i;
  int j;

  for (i = 0; i < strlen(input); i++)
    {
      for (j = 0; j <= 1; j++)
        {
          index = find_first_index(i, i + j + 1, input);
          count = ((i - index + 1) * 2) + j;
          if (count > maxcount)
            {
              firstindex = index;
              maxcount = count;
            }
        }
    }

  output(firstindex, maxcount, input);
}
