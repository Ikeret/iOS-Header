//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IdentityLookup/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface ILCommunication : NSObject <NSSecureCoding>
{
    NSString *_sender;
    NSDate *_dateReceived;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(readonly, copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCommunication:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithSender:(id)arg1 dateReceived:(id)arg2;

@end

