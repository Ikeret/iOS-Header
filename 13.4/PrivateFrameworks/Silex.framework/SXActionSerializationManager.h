//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionSerializationManager-Protocol.h>
#import <Silex/SXActionSerializer-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SXActionSerializationManager : NSObject <SXActionSerializer, SXActionSerializationManager>
{
    NSMutableDictionary *_serializers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *serializers; // @synthesize serializers=_serializers;
- (void)registerSerializer:(id)arg1 actionType:(id)arg2;
- (id)URLForAction:(id)arg1 type:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

