//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SASmsRecipientSearch : SADomainCommand
{
}

+ (id)recipientSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)recipientSearch;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *recipients;
@property(nonatomic) _Bool clientShouldResolvePhonesAndEmails;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

