//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASSearchTask.h>

@class NSString;

@interface ASMailboxEnhancedSearchTask : ASSearchTask
{
    NSString *_searchId;
}

- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (_Bool)processContext:(id)arg1;
- (id)replacementObjectForEmailItem:(id)arg1;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)requestBody;
- (void)_appendSearchOptions:(id)arg1;
- (void)_appendSearchQuery:(id)arg1;
- (void)performTask;
- (_Bool)requiresEASVersionInformaton;
- (int)commandCode;
- (id)initWithQuery:(id)arg1;

@end

