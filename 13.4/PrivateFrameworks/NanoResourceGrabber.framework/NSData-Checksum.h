//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (Checksum)
- (_Bool)matchesChecksumData:(id)arg1;
- (_Bool)matchesChecksum:(unsigned char [32])arg1;
- (void)checksumDataToChecksum:(unsigned char [32])arg1;
- (void)checksum:(unsigned char [32])arg1;
- (id)checksumData;
@end

