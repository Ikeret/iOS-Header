//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCMGroupManager : NSObject
{
}

+ (id)defaultManager;
- (id)groupContainerIdentifiersForUser:(unsigned int)arg1 identifier:(id)arg2 withError:(unsigned long long *)arg3;
- (void)_removeGroupContainersIfNeededforUser:(unsigned int)arg1 groupContainerClass:(unsigned long long)arg2 identifiers:(id)arg3 referenceCounts:(id)arg4;
- (void)_removeReferenceForGroupIdentifiers:(id)arg1 ofType:(long long)arg2;
- (id)groupContainerPathsForUser:(unsigned int)arg1 clientConnection:(id)arg2 identifier:(id)arg3 withError:(unsigned long long *)arg4;
- (void)handleChangeFromOldGroupContainerIds:(id)arg1 toNewGroupContainerIds:(id)arg2 ofType:(long long)arg3;
- (void)_cleanupUnreferencedGroupContainersForUser:(unsigned int)arg1 containerClass:(unsigned long long)arg2 referenceCounts:(id)arg3;
- (void)reconcileGroupContainersOfType:(long long)arg1;
- (id)_copyReferenceCountSetOfType:(long long)arg1;
- (id)init;

@end

