	git_buf buffer;
	cl_assert(git_oid_cmp(&expected_blob_oid, &entry->id) == 0);
	memset(&buffer, 0, sizeof(git_buf));
	cl_git_pass(git_message_prettify(&buffer, "Initial commit", 0));
		buffer.ptr,
	git_buf_free(&buffer);