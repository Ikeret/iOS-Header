//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (DAExtensions)
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 outError:(id *)arg2;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1;
- (id)da_accounts;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)da_loadDAAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_daAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 filterOnDataclasses:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
@end

