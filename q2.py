def get_dict(dict,path):
    st=path.split(".")
    curr=dict
    pointer=0
    for i in range(len(st)):
        key=st[i]
        if(key not in curr):
            return None
        else:
            curr=curr[key]
    return curr

cal={"student":{"roll":25}}
print(get_dict(cal,"student.roll"))


