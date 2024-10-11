# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    gen.pl                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: homokran <homokran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 17:24:25 by homokran          #+#    #+#              #
#    Updated: 2024/10/01 17:00:40 by homokran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl

use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

print "$y.ox\n";
for (my $i = 0; $i < $y; $i++)
{
	for (my $j = 0; $j < $x; $j++)
	{
		if (int(rand($y) * 2) < $density)
		{
			print "o";
		}
		else
		{
			print ".";
		}
	}
	print "\n";
}
