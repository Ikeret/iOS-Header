//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_dispatch_queue;

@interface _SBSDisplayIdentifiersCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_displayIdentifiers;
    int _changedToken;
    CDUnknownBlockType _changedBlock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_queue_noteChanged;
- (void)registerChangedBlock:(CDUnknownBlockType)arg1;
- (id)displayIdentifiers;
- (void)dealloc;
- (id)init;

@end

