//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASPolicyManager.h>

@class NSString;

@interface ASClientPolicyManager : ASPolicyManager
{
    NSString *_powerAssertionGroupIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *powerAssertionGroupIdentifier; // @synthesize powerAssertionGroupIdentifier=_powerAssertionGroupIdentifier;
- (void)setDelegate:(id)arg1;
- (void)requestPolicyUpdate;
- (void)policyFailedToUpdate;
- (void)policyKeyChanged:(id)arg1;
- (void)dealloc;

@end

