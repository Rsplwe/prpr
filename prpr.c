#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

const char * emoticon[] = {
  "⁄(⁄ ⁄•⁄ω⁄•⁄ ⁄)⁄",
  "(≧ ﹏ ≦)",
  "(*/ω＼*)",
  "ヽ(*。>Д<)o゜",
  "(つ ﹏ ⊂)",
  "o(´^｀)o",
};

int main() {
  int fd = open("/dev/random", O_RDONLY);
  unsigned int random_number;
  if (fd < 0) return -1;

  ssize_t bytes_read = read(fd, & random_number, sizeof(random_number));
  if (bytes_read < 0) {
    close(fd);
    return -1;
  }
  close(fd);
  
  int arr_len = sizeof(emoticon) / sizeof(emoticon[0]);
  printf("%s\n", emoticon[(random_number % arr_len) % arr_len]);

  return 0;
}
