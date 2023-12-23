#include <stdio.h>

struct Match {
    int viewers;
    char team[50];
};

double calculate_average_viewers(struct Match matches[], int num_matches) {
    int total = 0;
    for(int i = 0; i < num_matches; i++) {
        total += matches[i].viewers;
    }
    return (double)total / num_matches;
}

struct Match find_highest_viewership_match(struct Match matches[], int num_matches) {
    int max_index = 0;
    for(int i = 1; i < num_matches; i++) {
        if(matches[i].viewers > matches[max_index].viewers) {
            max_index = i;
        }
    }
    return matches[max_index];
}

int main() {
    int num_matches;

    printf("Enter number of matches: ");
    scanf("%d", &num_matches);

    struct Match matches[num_matches];

    printf("Enter viewers and team name for each match:\n");
    for(int i = 0; i < num_matches; i++) {
        printf("Match %d: ", i+1);
        scanf("%d %s", &matches[i].viewers, matches[i].team);
    }

    printf("Average viewers across all matches: %.2f\n", calculate_average_viewers(matches, num_matches));
    struct Match highest_match = find_highest_viewership_match(matches, num_matches);
    printf("Highest viewership match: %d, Team: %s\n", highest_match.viewers, highest_match.team);

    return 0;
}