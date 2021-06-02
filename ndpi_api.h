/*
 *
 *
 */

#ifndef NDPI_API_H
#define NDPI_API_H
void *ndpi_malloc(size_t size);
void ndpi_free(void *ptr);
void *ndpi_realloc(void *ptr, size_t osize, size_t nsize);
void *ndpi_calloc(size_t nmemb, size_t size);

#endif
