//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXVoicemailAction.h>

@interface CXSetTrashedVoicemailAction : CXVoicemailAction
{
    _Bool _trashed;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isTrashed) _Bool trashed; // @synthesize trashed=_trashed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)customDescription;
- (id)initWithVoicemailUUID:(id)arg1 trashed:(_Bool)arg2;

@end

