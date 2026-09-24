// #include <stdio.h>
// #include <cs50.h>
// #include <string.h>

// // in this part i declare a Global variable
// string condidate[3] = { "Alice", "Bob", "Charlie"};

// int main(void)
// {
// 	string myVote1 = get_string("Who is your Favorite Condidate: ");
// 	string myVote2 = get_string("Who is your Favorite Condidate: ");
// 	string myVote3 = get_string("Who is your Favorite Condidate: ");
// 	return 0;

//     for (int i = 0; i < 3; i++) {
//         if (myVote1 == condidate[i]) {
//             printf("You voted for %s\n", condidate[i]);
//         }
//         else if (myVote2 == condidate[i]) {
//             printf("You voted for %s\n", condidate[i]);
//         }
//         else if (myVote3 == condidate[i]) {
//             printf("You voted for %s\n", condidate[i]);
//         }
        
//         printf("the winner is %s\n", condidate[0]);
//     }

    

// }

#include <stdio.h>
#include <cs50.h>
#include <string.h>

// string candidate[3] = {"Alice", "Bob", "Charlie"};

// int main(void)
// {
//     int votes[3] = {0, 0, 0};

//     string myVote1 = get_string("Who is your favorite candidate: ");
//     string myVote2 = get_string("Who is your favorite candidate: ");
//     string myVote3 = get_string("Who is your favorite candidate: ");

//     string votesGiven[3] = {myVote1, myVote2, myVote3};

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (strcmp(votesGiven[i], candidate[j]) == 0)
//             {
//                 votes[j]++;
//                 printf("You voted for %s\n", candidate[j]);
//             }
//         }
//     }

//     int winner = 0;

//     for (int i = 1; i < 3; i++)
//     {
//         if (votes[i] > votes[winner])
//         {
//             winner = i;
//         }
//     }

//     printf("The winner is %s\n", candidate[winner]);

//     return 0;



// }

int main(void)
{
    string condidate[] = {"Ramin" , "Tim", "Lili"};
    string votes[3] = {0, 0, 0};

    string vote1 = get_string("vote 1: ");
    string vote2 = get_string("vote 2: ");
    string vote3 = get_string("vote 3: ");

    string allVote[] = {vote1, vote2, vote3};

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (strcmp(allVote[i], condidate[j] ) == 0){
                votes[j]++ ;
            }

        }
    }

    int winner = 0;

    for (int i = 0; i < 3; i++){
        if(votes[i] > votes[winner]){
            winner = i;
        }
    }

    printf("the winner is %s \n", condidate[winner]);

}

