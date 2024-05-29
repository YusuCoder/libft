/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:12:38 by ryusupov          #+#    #+#             */
/*   Updated: 2024/05/29 13:59:38 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

/*
	ft_split function splits a string into words based on a delimiter character
	and returns an array of strings representing those words. It handles memory
	allocation and freeing appropriately to ensure no memory leaks occur.
*/

// static int	count_words(char *s, char c)
// {
// 	int		count;
// 	bool	inside_word;

// 	count = 0;
// 	while (*s)
// 	{
// 		inside_word = false;
// 		while (*s == c)
// 			++s;
// 		while (*s != c && *s)
// 		{
// 			if (!inside_word)
// 			{
// 				++count;
// 				inside_word = true;
// 			}
// 			++s;
// 		}
// 	}
// 	return (count);
// }

// static char	*get_next_word(char *s, char c)
// {
// 	static int	cursor = 0;
// 	char		*next_word;
// 	int			len;
// 	int			i;

// 	len = 0;
// 	i = 0;
// 	while (s[cursor] == c)
// 		++cursor;
// 	while ((s[cursor + len] != c) && s[cursor + len])
// 		++len;
// 	next_word = malloc((size_t)len * sizeof(char) + 1);
// 	if (!next_word)
// 		return (NULL);
// 	while ((s[cursor] != c) && s[cursor])
// 		next_word[i++] = s[cursor++];
// 	next_word[i] = '\0';
// 	return (next_word);
// }

// char	**ft_split(char *s, char c)
// {
// 	int		words_count;
// 	char	**result_array;
// 	int		i;

// 	i = 0;
// 	words_count = count_words(s, c);
// 	if (!words_count)
// 		exit(1);
// 	result_array = malloc(sizeof(char *) * (size_t)(words_count + 2));
// 	if (!result_array)
// 		return (NULL);
// 	while (words_count-- >= 0)
// 	{
// 		if (i == 0)
// 		{
// 			result_array[i] = malloc(sizeof(char));
// 			if (!result_array[i])
// 				return (NULL);
// 			result_array[i++][0] = '\0';
// 			continue ;
// 		}
// 		result_array[i++] = get_next_word(s, c);
// 	}
// 	result_array[i] = NULL;
// 	return (result_array);
// }

static int	colculated_words(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	free_array(char **array, size_t i)
{
	if (!array)
		return ;
	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	**extracting(const char *s1,
char **result, char c, size_t words)
{
	size_t	i;
	size_t	a;
	size_t	counter;
	size_t	start;

	i = 0;
	a = 0;
	while (i < words)
	{
		counter = 0;
		while (s1[a] && s1[a] == c)
			a++;
		start = a;
		while (s1[a] && s1[a] != c)
		{
			a++;
			counter++;
		}
		result[i] = ft_substr(s1, start, counter);
		if (!result[i])
		{
			free_array(result, i);
			return (NULL);
		}
		i++;
	}
	return (result);
}

char	**ft_split(char const *s1, char c)
{
	char	**result;
	size_t	words;

	if (!s1)
	{
		return (NULL);
	}
	words = colculated_words(s1, c);
	result = (char **)malloc(sizeof(char *) * (size_t)words + 1);
	if (!result)
	{
		return (NULL);
	}
	return (extracting(s1, result, c, words));
}

/*int ft_is_delimeter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int ft_words_cout(char *str)
{
	int i = 0;
	int length = 0;
	while (str[i])
	{
		if(!ft_is_delimeter(str[i]))
		{
			length++;
			i++;
		}
		else
			i++;
	}
	return (length);
}

char *ft_get_words(char *str)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] != '\0' && !ft_is_delimeter(str[i]))
	{
		i++;
	}
	word = (char *)malloc(sizeof(char) * (i + 1));
	if(!word)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && !ft_is_delimeter(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char    **ft_split(char *str)
{
    int i = 0;
    char **split;

    split = (char **)malloc(sizeof(char *) * (ft_words_cout(str) + 1));
    if (!split)
        return (NULL);
    while (*str)
    {
        while (*str && ft_is_delimeter(*str))
        {
            str++;
        }
        if (*str)
        {
            split[i++] = ft_get_words(str);
            while (*str && !ft_is_delimeter(*str))
            {
                str++;
            }
        }
    }
    split[i] = NULL;
    return (split);
}
int main() {
    char *str = "This is a sample string to split";
    char **split = ft_split(str);

    if (split) {
        int i = 0;
        while (split[i]) {
            printf("%s\n", split[i]);
            free(split[i]);
            i++;
        }
        free(split);
    } else {
        printf("Split failed.\n");
    }

    return 0;
}
 */
