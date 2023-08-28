import os
import subprocess
import sys

def print_count():
    dir = os.listdir(os.getcwd())
    count = 0
    counts = 0
    counts_=0
    counts_1 = 0
    for root, dirs, file in os.walk(os.getcwd()):
        print(root.rsplit('/', 1)[-1])
        if root.rsplit('/', 1)[-1] == "s01_bin":
            for name in file:
                print(name)
                i = os.path.join(root,name)
                count = 0
                proc = subprocess.Popen(["cwe_checker", i], stdout=subprocess.PIPE,
                                           stderr=subprocess.PIPE)
                out, err = proc.communicate()
                # print(out.decode())

                if "CWE190" in out.decode():
                    counts = out.decode().count("CWE190")
                    if counts >1:
                        counts_+=1
                        counts_1+=counts
                    count += 1
                    print(out.decode())


    print(counts, "counts")
    print(counts_, "counts_")
    print(counts_1, "counts_1")

    print(count, "count")
print_count()


# def CMD(cmd) :
#     p = subprocess.Popen(cmd, shell=True,
#                          stdin=subprocess.PIPE,
#                          stdout=subprocess.PIPE,
#                          stderr=subprocess.PIPE,
#                          close_fds=False)
#     return (p.stdin, p.stdout, p.stderr)
#
#
# a,b,c = CMD(["cwe_checker"])
# print(c.read())
