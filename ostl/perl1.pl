#!/usr/bin/perl

sub fact{

$x = shift;
$fact = 1;

for( $i = 1; $i <= $x ; $i=$i+1 ){
    $fact = $fact*$i;
}
return ($fact);
}



print"Enter the size of ARRAY : ";
$n=<STDIN>;
for($i=0;$i<$n;$i++)
{
	print"Enter the Element : ";
	$arr[$i]=<STDIN>;
	
}

for($i=0;$i<$n;$i=$i+1)
{

if($arr[$i]%2==0)
	{
	print"FACTORIAL OF $arr[$i] : ";
	$val=fact($arr[$i]);
	print"$val";
	}


}


