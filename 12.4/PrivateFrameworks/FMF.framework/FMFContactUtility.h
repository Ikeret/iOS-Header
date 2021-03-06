//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactFormatter, CNContactStore;

@interface FMFContactUtility : NSObject
{
    CNContactStore *_contactStore;
    CNContactFormatter *_contactFormatter;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (id)contactKeys;
- (id)findOptimalContactInContacts:(id)arg1;
- (id)getContactForHandle:(id)arg1 keysToFetch:(id)arg2;
- (id)getContactForHandle:(id)arg1;
- (id)displayNameForContact:(id)arg1 andHandle:(id)arg2;

@end

