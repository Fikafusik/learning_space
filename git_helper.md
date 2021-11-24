
# git belper for any usefull commands and cases

## Push local changes

After your work you need to add changed files in index:

1. `git add <file>` - add one file
2. `git add <folder>/*` - add all changed files in custom folder
3. `git add *` - add all changed

After you need make commit from your indexed changes:

1. git commit -m "[CSV]: fix memory leak in reader_t class with quoted_policy_t == minimal"

Your message should be informative and related to "This commit would ..."

After you need to make push request:

`git push origin you_working_branch`

## Using git stash

If you do some changes and want to switch to another task, but return to this later, you can use `git stash` command:

`git stash` - will store all changes in stash

After return to this task you can load you changes from stash:

`git stash pop`
