//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LAPrearmContextXPC-Protocol.h"

@class BKMatchOperation, NSError;

@interface TouchIdPrearmContext : NSObject <LAPrearmContextXPC>
{
    BKMatchOperation *_matchOperation;
    NSError *_failure;
}

+ (void)prearmForUser:(id)arg1 request:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *failure; // @synthesize failure=_failure;
- (id)initWithUserId:(id)arg1;

@end

