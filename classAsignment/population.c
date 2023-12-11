// Lab 1: Population Growth
// You are welcome to collaborate with one or two classmates on this lab, though it is expected that every student in any such group contribute equally to the lab.

// Determine how long it takes for a population to reach a particular size.

// $ ./population
// Start size: 100
// End size: 200
// Years: 9
// Background
// Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.

// For example, if we were to start with n = 1200 llamas, then in the first year, 1200 / 3 = 400 new llamas would be born and 1200 / 4 = 300 llamas would pass away. At the end of that year, we would have 1200 + 400 - 300 = 1300 llamas.

// To try another example, if we were to start with n = 1000 llamas, at the end of the year, we would have 1000 / 3 = 333.33 new llamas. We can’t have a decimal portion of a llama, though, so we’ll truncate the decimal to get 333 new llamas born. 1000 / 4 = 250 llamas will pass away, so we’ll end up with a total of 1000 + 333 - 250 = 1083 llamas at the end of the year.

#include <cs50.h>
#include <stdio.h>

int main (void)
{

    int start_date;
    int end_date;

    do {

    start_date = get_int("Start date: ");
    } while (start_date < 9);

    do {

    end_date = get_int("End date: ");
    } while (end_date < start_date);


    int years = 0;

    while (start_date < end_date) {
        int born_illamas =  start_date / 3;
        int dead_illamas = start_date / 4;

        start_date = start_date + born_illamas - dead_illamas;
        years++;

    }

    printf("Years: %i \n", years);
}
