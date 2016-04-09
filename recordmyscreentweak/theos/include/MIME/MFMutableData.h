/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import <Foundation/NSData.h>


@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying> {
	void* _bytes;
	unsigned _length;
	unsigned _mappedLength;
	unsigned _capacity;
	unsigned _threshold;
	char* _path;
	int _fd;
	unsigned _flushFrom;
	BOOL _flush;
	BOOL _immutable;
	BOOL _vm;
}
// inherited: -(instancetype)init;
-(instancetype)initWithBytes:(const void*)bytes length:(unsigned)length;
-(id)_initImmutableWithFd:(int)fd path:(id)path;
-(instancetype)initWithBytesNoCopy:(void*)bytesNoCopy length:(unsigned)length;
-(instancetype)initWithBytesNoCopy:(void*)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;
-(instancetype)initWithContentsOfURL:(id)url options:(unsigned)options error:(id*)error;
-(instancetype)initWithContentsOfURL:(id)url;
-(instancetype)initWithContentsOfMappedFile:(id)mappedFile;
-(instancetype)initWithContentsOfFile:(id)file options:(unsigned)options error:(id*)error;
-(instancetype)initWithContentsOfFile:(id)file;
-(instancetype)initWithData:(id)data;
-(instancetype)initWithCapacity:(unsigned)capacity;
-(instancetype)initWithLength:(unsigned)length;
// in a protocol: -(id)copyWithZone:(NSZone*)zone;
// in a protocol: -(id)mutableCopyWithZone:(NSZone*)zone;
// inherited: -(void)dealloc;
-(unsigned)length;
-(const void*)bytes;
-(const void*)mutableBytes;
-(void)appendBytes:(const void*)bytes length:(unsigned)length;
-(void)appendData:(id)data;
-(id)subdataWithRange:(NSRange)range;
-(void)setLength:(unsigned)length;
-(void)setMappingThreshold:(unsigned)threshold;
-(void)mf_makeImmutable;
-(BOOL)writeToFile:(id)file atomically:(BOOL)atomically;
-(BOOL)writeToURL:(id)url atomically:(BOOL)atomically;
-(BOOL)writeToFile:(id)file options:(unsigned)options error:(id*)error;
-(BOOL)writeToURL:(id)url options:(unsigned)options error:(id*)error;
-(void)_flushToDisk:(unsigned)disk capacity:(unsigned)capacity;
-(void)_mapMutableData:(BOOL)data;
-(BOOL)mf_immutable;
@end
