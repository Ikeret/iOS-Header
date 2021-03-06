//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SADomainObjectCommand-Protocol.h>

@class NSString, SADomainObject;

@interface SADomainObjectCommit : SABaseClientBoundCommand <SADomainObjectCommand>
{
}

+ (id)domainObjectCommitWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectCommit;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SADomainObject *identifier;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

