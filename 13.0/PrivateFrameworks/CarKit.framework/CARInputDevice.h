//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CARInputDevice : NSObject
{
    NSString *_UUID;
    unsigned long long _senderID;
}

@property(readonly, nonatomic) unsigned long long senderID; // @synthesize senderID=_senderID;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)_setSenderID:(unsigned long long)arg1;
- (void)_setUUID:(id)arg1;
- (id)initWithServiceClient:(struct __IOHIDServiceClient *)arg1 UUID:(id)arg2;

@end

