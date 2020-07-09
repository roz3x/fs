
#include <stdint.h>

typedef uint64_t u64;
typedef uint8_t u8;

#define P(...) fprintf(stdout,__VA_ARGS__);fprintf(stdout,"\n")
#define L(...) fprintf(stderr,"[LOG] ");fprintf(stderr,__VA_ARGS__);fprintf(stderr,"\n")

enum { t_file , t_dir , t_link } ;

#pragma pack(1)
typedef struct {
	u8    i_type;
	u8    i_id;
	u64   i_name_size;
	char* i_name;
	union {
		struct {
			u64  i_end;
			u64  i_off;
			u8   i_parent_id;
		};
		struct {
			u8   i_child_num;
			u8*  i_child_ids;
		};
	};
} inode ;

#pragma pack(1)
typedef struct {
	u8    size;
	char* pass;
	char* nonce;
} secret ;

struct {
 /*	secret sec;	 */
	u64    num;
	inode* inodes;
} fs;
