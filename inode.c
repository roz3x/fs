

/*
 *   __FILE__ = inode.cc
 */

static void parse_inodes(FILE* s) {
	/*TODO  sec part */
	fseek(s,0,SEEK_SET);
	fread(&fs.num , sizeof(u64) , 1 , s);
	fs.inodes = (inode*)   malloc(fs.num* sizeof(inode)) ;

	return;
}
