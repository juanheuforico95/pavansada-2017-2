#!/usr/bin/expect -f
# For colors
proc capability cap {expr {![catch {exec tput -S << $cap}]}}
proc colorterm {} {expr {[capability setaf] && [capability setab]}}
proc tput args {exec tput -S << $args >/dev/tty}
array set color {black 0 red 1 green 2 yellow 3 blue 4 magenta 5 cyan 6 white 7}
proc foreground x {exec tput -S << "setaf $::color($x)" > /dev/tty}
proc background x {exec tput -S << "setab $::color($x)" > /dev/tty}
proc reset {} {exec tput sgr0 > /dev/tty}
#Put your test case here
eval spawn [lrange $argv 0 end]
expect "dame el numero que quieras provar que sea perfecto:" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
send "28\r"
expect "the dividend Numbers are: 1" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
expect "the dividend Numbers are: 2" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
expect "the dividend Numbers are: 4" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
expect "the dividend Numbers are: 7" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
expect "the dividend Numbers are: 14" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
expect "summation= 28" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
expect "true" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
expect "is a perfect number" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
#caso input=5
eval spawn [lrange $argv 0 end]
expect "dame el numero que quieras provar que sea perfecto:" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
send "23\r"
expect "the dividend Numbers are: 1" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
expect "summation= 1" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
expect "false" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
expect "is not a perfect number" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}


#expect "What is the id:" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
#send "0101\r"
#expect "name: Angel Perez, semestre: 6" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
