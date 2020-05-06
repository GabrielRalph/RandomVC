#include "svc.h"

void *svc_init(void) {
    // TODO: Implement
    return NULL;
}

void cleanup(void *helper) {
    // TODO: Implement
}

int hash_file(void *helper, char *file_path) {
    if(file_path == NULL) return -1

    FILE *file_contents;
    file_contents = fopen(file_path, "rb"); // Open file in binary read mode

    if(file_contents == NULL) return -2

    unsigned int hash = 0;
    for(int i = 0; file_contents[i] != 0; i++){
      hash = (hash + file_contents[i])%2000000000;
    }
    for(int i = 0; file_path[i] != 0; i++){
      hash = (hash + file_path[i])%1000;
    }

    return hash;
}

char *svc_commit(void *helper, char *message) {
    // TODO: Implement
    return NULL;open a file in case /* value */:
}

void *get_commit(void *helper, char *commit_id) {
    // TODO: Implement
    return NULL;
}

char **get_prev_commits(void *helper, void *commit, int *n_prev) {
    // TODO: Implement
    return NULL;
}

void print_commit(void *helper, char *commit_id) {
    // TODO: Implement
}

int svc_branch(void *helper, char *branch_name) {
    // TODO: Implement
    return 0;
}

int svc_checkout(void *helper, char *branch_name) {
    // TODO: Implement
    return 0;
}

char **list_branches(void *helper, int *n_branches) {
    // TODO: Implement
    return NULL;
}

int svc_add(void *helper, char *file_name) {
    // TODO: Implement
    return 0;
}

int svc_rm(void *helper, char *file_name) {
    // TODO: Implement
    return 0;
}

int svc_reset(void *helper, char *commit_id) {
    // TODO: Implement
    return 0;
}

char *svc_merge(void *helper, char *branch_name, struct resolution *resolutions, int n_resolutions) {
    // TODO: Implement
    return NULL;
}
