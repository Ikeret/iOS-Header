//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>
{
    unsigned long long _fileId;
}

+ (_Bool)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;
@property(readonly) unsigned long long fileId; // @synthesize fileId=_fileId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFileId:(unsigned long long)arg1;

@end

